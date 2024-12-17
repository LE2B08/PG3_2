#include "ClearScene.h"


/// ------------------------------------------------
///					　更新処理
/// ------------------------------------------------
void ClearScene::Update(InputManager& input)
{
	// Enterキーを押したらタイトルシーンに遷移
	if (input.IsKeyPressed(DIK_RETURN))
	{
		SceneManager::SetNextScene(new TitleScene());
	}
}


/// ------------------------------------------------
///					　描画処理
/// ------------------------------------------------
void ClearScene::Draw()
{
	Novice::ScreenPrintf(100, 100, "Clear Scene");
	Novice::ScreenPrintf(100, 200, "Press Enter to Return to Title");
}
