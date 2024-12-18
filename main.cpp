#include <Novice.h>
#include "SceneManager.h"
#include "TitleScene.h"
#include "InputManager.h"

#include "Receiver.h"
#include "MoveCommand.h"
#include "Invoker.h"

const char kWindowTitle[] = "学籍番号";

// Windowsアプリでのエントリーポイント(main関数)
int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {

	// ライブラリの初期化
	Novice::Initialize(kWindowTitle, 1280, 720);

	InputManager inputManager;
	Receiver receiver;
	Invoker invoker;

	// コマンドの作成
	MoveCommand moveRightCommand(&receiver, 1, 0); // 右方向
	MoveCommand moveLeftCommand(&receiver, -1, 0); // 左方向
	MoveCommand moveUpCommand(&receiver,0, -1);	   // 上方向
	MoveCommand moveDownCommand(&receiver,0, 1);   // 下方向

	// 初期シーンをタイトルシーンに設定
	//SceneManager::Initialize(new TitleScene());

	// ウィンドウの×ボタンが押されるまでループ
	while (Novice::ProcessMessage() == 0) {
		// フレームの開始
		Novice::BeginFrame();

		///
		/// ↓更新処理ここから
		///

		// 入力更新処理
		inputManager.Update();

		// シーンの更新処理
		//SceneManager::Update(inputManager);

		// 入力に応じてコマンドを実行

		// 上に移動
		if (inputManager.IsKeyPressed(DIK_UP))
		{
			invoker.ExecuteCommand(&moveUpCommand);
		}

		// 下に移動
		if (inputManager.IsKeyPressed(DIK_DOWN))
		{
			invoker.ExecuteCommand(&moveDownCommand);
		}

		// 右に移動
		if (inputManager.IsKeyPressed(DIK_RIGHT))
		{
			invoker.ExecuteCommand(&moveRightCommand);
		}

		// 左に移動
		if (inputManager.IsKeyPressed(DIK_LEFT))
		{
			invoker.ExecuteCommand(&moveLeftCommand);
		}

		// Ctrl + ZでUndo
		if (inputManager.IsKeyDown(DIK_LCONTROL) && inputManager.IsKeyPressed(DIK_Z))
		{
			invoker.UndoLastCommand();
		}

		///
		/// ↑更新処理ここまで
		///

		///
		/// ↓描画処理ここから
		///

		// シーンの描画処理
		//SceneManager::Draw();

		// オブジェクトの描画
		receiver.Draw();

		///
		/// ↑描画処理ここまで
		///

		// フレームの終了
		Novice::EndFrame();

		// ESCキーが押されたらループを抜ける
		if (inputManager.IsKeyPressed(DIK_ESCAPE)) {
			break;
		}
	}

	// ライブラリの終了
	//SceneManager::Finalize();
	Novice::Finalize();
	return 0;
}
