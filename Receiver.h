#pragma once

#include <Novice.h>

/// ------------------------------------------------
///		　移動の操作を行うオブジェクトクラス
/// ------------------------------------------------
class Receiver
{
private: /// ---------- メンバ変数 ---------- ///

	int positionX;
	int positionY;

public: /// ---------- メンバ関数 ---------- ///

	// コンストラクタ
	Receiver() : positionX(640), positionY(360) {} // 初期位置は画面中央

	void Move(int deltaX, int deltaY);

	void Draw() const;
};

