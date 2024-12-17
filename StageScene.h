#pragma once
#include "State.h"
#include "SceneManager.h"
#include "ClearScene.h"

/// ------------------------------------------------
///				ステージシーンクラス
/// ------------------------------------------------
class StageScene : public State
{
public: /// ---------- メンバ関数 ---------- ///

	// 更新処理
	void Update(InputManager& input) override;

	// 描画処理
	void Draw() override;

private: /// ---------- メンバ変数 ---------- ///

	// 敵のHP
	int enemyHP = 3;

};

