#ifndef ENGINE_H
#define ENGINE_H

class Engine
{
private:
    int horsepower;
    double displacement;


public:
    Engine():horsepower(0),displacement(0.0){}
    Engine(int hp,double dp):horsepower(hp),displacement(dp){}

    int getHorsepower() const;
    void setHorsepower(int newHorsepower);

    double getDisplacement() const;
    void setDisplacement(double newDisplacement);
};

#endif // ENGINE_H
