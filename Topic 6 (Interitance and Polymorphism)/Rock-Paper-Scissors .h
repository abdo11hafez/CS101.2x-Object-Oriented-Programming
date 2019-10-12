
class Weapon
{
protected:
    int strength;
    char type;
public:
    int modified;

    int return_strength()
    {
        return strength;
    }

    char return_type()
    {
        return type;
    }

    void setPower (int val)
    {
        strength = val;
        return;
    }
};



class Rock: public Weapon
{

public:
    Rock()
    {
        type='r';
    }
    bool battle(Weapon w)
    {
        if (w.return_type() =='p')
        {
            w.modified = w.return_strength()*2;
            modified = strength /2 ;
            if (modified > w.modified) return true ;
            else return false ;
        }
        if (w.return_type() =='s')
        {
            w.modified = w.return_strength()/2;
            modified = strength *2 ;
            if (modified > w.modified) return true ;
            else return false ;
        }
    }

};

class Paper: public Weapon
{

public:
    Paper()
    {
        type='p';
    }
    bool battle(Weapon w)
    {
        if (w.return_type() =='r')
        {
            w.modified = w.return_strength()/2;
            modified = strength *2 ;
            if (modified > w.modified) return true ;
            else return false ;
        }
        if (w.return_type() =='s')
        {
            w.modified = w.return_strength()*2;
            modified = strength /2 ;
            if (modified > w.modified) return true ;
            else return false ;
        }
    }

};

class Scissors: public Weapon
{

public:
    Scissors()
    {
        type='s';
    }
    bool battle(Weapon w)
    {
        if (w.return_type() =='p')
        {
            w.modified = w.return_strength()/2;
            modified = strength *2 ;
            if (modified > w.modified) return true ;
            else return false ;
        }
        if (w.return_type() =='r')
        {
            w.modified = w.return_strength()*2;
            modified = strength /2 ;
            if (modified > w.modified) return true ;
            else return false ;
        }
    }

};