#include "Transaction.h"

Transaction::Transaction(int amt, string kind) :amount(amt), type(kind){}

string Transaction::Report()
{
	string report;
	report += "  ";
	report += type;
	report += " ";
	report += to_string(amount);

	return report;
}