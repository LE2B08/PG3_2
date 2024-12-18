#pragma once

#include "Command.h"
#include <stack>

/// ------------------------------------------------
///				コマンドの基底クラス
/// ------------------------------------------------
class Invoker
{
public: /// ---------- メンバ関数 ---------- ///

	// 実行コマンド
	void ExecuteCommand(Command* command);

	// アンドゥコマンド
	void UndoLastCommand();

private: /// ---------- メンバ変数 ---------- ///

	// コマンドの履歴
	std::stack<Command*> commandHistory;
};

