#include <iostream>
using namespace std;

void hospital(int days);
main()
{
    int days, patients;

    cout << "Enter number of days: ";
    cin >> days;

    hospital(days);
}
void hospital(int days)
{
    int patients;
    int untreatedPatientsPerDay = 0;
    int treatedPatientsPerDay = 0;

    int doctor = 7;

    for (int x = 1; x <= days; x = x + 1)

    {
        cout << "Enter number of patients: ";
        cin >> patients;

        if (x % 3 == 0 && untreatedPatientsPerDay > treatedPatientsPerDay)
        {
            doctor = doctor + 1;
        }
        if (patients <= doctor)
        {
            treatedPatientsPerDay = treatedPatientsPerDay + patients;
        }
        if (doctor < patients)
        {
            treatedPatientsPerDay = treatedPatientsPerDay + doctor;
            untreatedPatientsPerDay = untreatedPatientsPerDay + (patients - doctor);
        }

        
    }
    cout << "Treated Patients: " << treatedPatientsPerDay << endl;
    cout << "Untreated Patients: " << untreatedPatientsPerDay << endl;
}