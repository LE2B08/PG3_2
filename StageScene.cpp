#include "StageScene.h"


/// ------------------------------------------------
///					　更新処理
/// ------------------------------------------------
void StageScene::Update(InputManager& input)
{
	if (input.IsKeyPressed(DIK_SPACE))
	{
		enemyHP--;
	}
	if (enemyHP <= 0)
	{
		SceneManager::SetNextScene(new ClearScene());
	}
}


/// ------------------------------------------------
///					　描画処理
/// ------------------------------------------------
void StageScene::Draw()
{
	Novice::ScreenPrintf(100, 100, "Stage Scene");
	Novice::ScreenPrintf(100, 200, "Press Space to Attack");
	Novice::ScreenPrintf(100, 300, "Enemy HP: %d", enemyHP);
}
