int button[7][3] = {{1, , }, {2, , }, {3, , }, {4, , }, {5, , }, {6, , }, {7, , }} 
int analogPin = 5;
int time = 0;
int debounce = 50;
int current = 0;
int buttonVal;
int note = 0;
int counter = 0;

void setup()
{
	Serial.begin(9600); 
}

void loop()
{
	if (time != millis())
	{
		buttonVal = analogRead(analogPin);
		if(buttonVal != current)
		{
			counter++;
		}
		if(buttonVal == current && counter > 0)
		{ 
			counter--;
		}
		if(counter >= debounce)
		{
			counter = 0;
			current = buttonVal;
			if(buttonVal > 0)
			{
				for(int i = 0; i <= 7; i++)
				{
					if(buttonVal >= Button[i][1] && buttonVal <= Button[i][2])
					{
						note = Button[i][0];
						Print();      
					}
				}
			}
		}
   	time = millis();
	}
}

void Print()
{
	if(note == 1)
	{
		Serial.println("Do");
		tone(261.63, 300); //C4
	}
	if(note == 2)
	{
		Serial.println("Re");
		tone(293.66, 300); //D4
	}
	if(note == 3)
	{ 
		Serial.println("Mi");
		tone(329.63, 300); //E4
	}
	if(note == 4)
	{
		Serial.println("Fa");
		tone(349.23, 300); //F4
	}
	if(note == 5)
	{
		Serial.println("Sol");
		tone(392.00, 300); //G4
	}
	if(note == 6)
	{
		Serial.println("La");
		tone(440.00, 300); //A4
	}
	if(note == 7)
	{
		Serial.println("Si");
		tone(493.88, 300); //B4
	}    
}
