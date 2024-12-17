#include <Novice.h>
#include "SceneManager.h"
#include "InputManager.h"
#include "TitleScene.h"

const char kWindowTitle[] = "学籍番号";

// Windowsアプリでのエントリーポイント(main関数)
int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {

	// ライブラリの初期化
	Novice::Initialize(kWindowTitle, 1280, 720);

	InputManager inputManager;

	// 初期シーンをタイトルシーンに設定
	SceneManager::Initialize(new TitleScene());

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
		SceneManager::Update(inputManager);

		///
		/// ↑更新処理ここまで
		///

		///
		/// ↓描画処理ここから
		///

		// シーンの描画処理
		SceneManager::Draw();

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
	SceneManager::Finalize();
	Novice::Finalize();
	return 0;
}
