#include "Receiver.h"

void Receiver::Move(int direction)
{
	positionX += direction * 10;
}

void Receiver::Draw() const
{
	Novice::DrawBox(positionX - 25, 350, 50, 50, 0.0f, 0xFFFFFFFF, kFillModeSolid);
}