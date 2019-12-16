int LedType = 0;

void setup(){
	for(LedType<=13; LedType>=3; LedType-1){
		(LedType, OUTPUT);
	}
}void loop(){
	for(LedType<=13; LedType>=3; LedType-1){
		digitalWrite(LedType, 1);
		delay(500);
		digitalWrite(LedType, 0);
		delay(500);
	}
}	
