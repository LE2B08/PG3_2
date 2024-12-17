#pragma once

#include <Novice.h>
#include <cstring>

/// ------------------------------------------------
///				Inputマネージャークラス
/// ------------------------------------------------
class InputManager
{
public: /// ---------- メンバ関数 ---------- ///

	// 更新処理
	void Update();
	// 
	bool IsKeyPressed(int key);
	// 
	bool IsKeyDown(int key);

public: /// ---------- メンバ変数 ---------- ///

	char keys[256] = { 0 };
	char preKeys[256] = { 0 };

};

