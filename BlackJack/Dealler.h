#pragma once
#include<string>

#include"GenericPlayer.h"

class Dealler :public GenericPlayer
{

public:
	Dealler(const std::string& name = "Dealler");

	bool isHitting()override;
	void hideSecond()override;
	void showSecond()override;
};