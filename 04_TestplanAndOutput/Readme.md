## Test Plan
|TestID|	Description|	Input|	Output|	Status|
|------|-------------|-------|--------|-------|
TID_01|	if person seated|	push button=1|	push button=1|	PASS
TID_02|	if  person not seated|	push button=0|	push button=0|	PASS
TID_03|	Temperature Request|	Temp=0|	heater=Off|	PASS
TID_04|	Temperature Request|	Temp=20|	heater=20 degree generation|	PASS
TID_05|	Temperature Request|	Temp=25|	heater=25 degree generation|	PASS
TID_06|	LED ON|	Button=1 && Heater=1|	LED=1|	PASS
TID_07|	LED OFF|	Button=0 && Heater=0|	LED=0|	PASS
TID_08|	LCD Display|	Temperature : 20 deg Cel| Temperature : 20 deg Cel| PASS
	
	

