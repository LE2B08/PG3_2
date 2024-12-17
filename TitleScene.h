#pragma once
#include "State.h"
#include "SceneManager.h"
#include "StageScene.h"

/// ------------------------------------------------
///				タイトルシーンクラス
/// ------------------------------------------------
class TitleScene : public State
{
public: /// ---------- メンバ関数 ---------- ///

	// 更新処理
	void Update(InputManager& input) override;

	// 描画処理
	void Draw() override;

};

