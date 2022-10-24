#pragma once
class Player
{
private:
    int hp, stamina, exp;
    
public:
    bool key = false;

    Player();
    bool Player_alive = true;
    void change_hp(int a);
    void get_key();
};

