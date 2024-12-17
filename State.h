#pragma once

#include "InputManager.h"

/// ------------------------------------------------
///				シーンの基底クラス
/// ------------------------------------------------
class State
{
public: /// ---------- 純粋仮想関数 ---------- ///
	
	// デストラクタ
	virtual ~State() {}

	// 更新処理
	virtual void Update(InputManager& input) = 0;

	// 描画処理
	virtual void Draw() = 0;

};

