#include "lab.hpp"

int main() {
    srand(time(NULL));
    
    patient *patient = new class patient[N];
    patient->main(patient);
    
    delete []patient;
    return 0;
}
