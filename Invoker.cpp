#include "Invoker.h"

void Invoker::ExecuteCommand(Command* command)
{
	command->Execute();
	commandHistory.push(command);
}

void Invoker::UndoLastCommand()
{
	if (!commandHistory.empty())
	{
		Command* lastCommand = commandHistory.top();
		lastCommand->Undo();
		commandHistory.pop();
	}
}
