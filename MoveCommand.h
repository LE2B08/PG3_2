#pragma once
#include "Command.h"
#include "Receiver.h"


/// ------------------------------------------------
///				クリアシーンクラス
/// ------------------------------------------------
class MoveCommand : public Command
{
private: /// ---------- メンバ変数 ---------- ///

	Receiver* receiver;
	int directionX; // 水平方向（-1: 左, 1: 右）
	int directionY; // 垂直方向（-1: 上, 1: 下） 

public: /// ---------- メンバ関数 ---------- ///

	// コンストラクタ
	MoveCommand(Receiver* receiver, int directionX, int directionY) : receiver(receiver), directionX(directionX), directionY(directionY) {}

	// 実行関数
	void Execute() override { receiver->Move(directionX, directionY); }

	// 元に戻す
	void Undo() override { receiver->Move(-directionX, -directionY); }

};

