#include "../headers.h"

struct data{
    double temperature;
    double humidity;
    double pressure;
};

class Subject{
    public:
        data getData() const{
            return m_data;
        }
        void setData(data& data){
            m_data = data;
            notifyObservers();
        }

        virtual void registerObserver(Observer* observer) = 0;
        virtual void removeObserver(Observer* observer) = 0;
        virtual void notifyObservers() = 0;

    private:
        std::vector<Observer*> m_observers;
        data m_data;
};

class Observer{
    public:
        virtual void update() = 0;
};

class DisplayElement{
    public:
        virtual void display() = 0;
};

class WeatherData : public Subject{
    public:

};