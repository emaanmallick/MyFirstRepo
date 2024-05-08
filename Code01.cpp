#include<iostream>
#include<string>

using namespace std;

class SecurityTool {
	protected:
		string securityLevel;
		double cost;
		int noDevices;
		
		
		public:
		SecurityTool	(	string securityLevel,double cost ,int noDevices):
			securityLevel(securityLevel),cost(cost),noDevices(noDevices)
			{
			
		}
