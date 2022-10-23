#include "lab.hpp"
Timer::Timer(int sec) { this->sec = sec; min = 0; }
Timer::Timer(int sec, int min) { this->sec = sec; this->min = min; }
Timer::Timer(const Timer& timer2) { sec = timer2.sec, min = timer2.min; }
void Timer::show() {
#ifdef DEBUG
    cout << "Количество минут:" << min<< endl;
#endif // DEBUG
    cout << "Количество секунд:" << sec <<endl;
}
