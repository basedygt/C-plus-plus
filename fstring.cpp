#include <iostream>

using namespace std;

int main() {
    
    double sales = 95000;

    const double state_tax_rate = 0.04;
    const double country_tax_rate = 0.02;

    double state_tax = sales * state_tax_rate;
    double country_tax = sales * country_tax_rate;

    double total_tax = state_tax + country_tax;
    
    cout << "Sales = " << sales << "$" << endl
         << "State Tax = " << state_tax << "$" << endl
         << "Country Tax = " << country_tax << "$" << endl
         << "Total Tax = " << total_tax << "$" << endl;
    return 0;
}