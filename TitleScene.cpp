#include "TitleScene.h"


/// ------------------------------------------------
///					　更新処理
/// ------------------------------------------------
void TitleScene::Update(InputManager& input)
{
	if (input.IsKeyPressed(DIK_RETURN))
	{
		SceneManager::SetNextScene(new StageScene());
	}
}


/// ------------------------------------------------
///					　描画処理
/// ------------------------------------------------
void TitleScene::Draw()
{
	Novice::ScreenPrintf(100, 100, "TitleScene");
	Novice::ScreenPrintf(100, 200, "Press Enter to Start");
}
