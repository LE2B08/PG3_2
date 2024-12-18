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
	int direction; // -1: 左, 1: 右

public: /// ---------- メンバ関数 ---------- ///

	// コンストラクタ
	MoveCommand(Receiver* receiver, int direction) : receiver(receiver), direction(direction) {}

	// 実行関数
	void Execute() override { receiver->Move(direction); }

	// 元に戻す
	void Undo() override { receiver->Move(-direction); }

};

