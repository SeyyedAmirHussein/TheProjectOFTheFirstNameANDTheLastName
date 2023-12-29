// The Project OF The First Name , AND & The Last Name .

// In this program. We want to Receive The First Name and The Last Name from The Serial and print them on The Serial Monitor .

// The Main Code OF The Project OF The First Name , AND & The Last Name . . INO . .




void setup () {


  Serial.begin (9600);                                                                                                                                              // Introducing The Series .


}


void loop () {


  if (Serial.available () ) {


    String TheFirstName = Serial.readString ();
    String TheLastName = Serial.readString ();


    Serial.print (" * * * * The First Name : * * * * ");                                                                                          // Show The Desired Message .
    Serial.print (" * * * * The Last Name : * * * * ");                                                                                          // Show The Desired Message .


    Serial.println (TheFirstName);                                                                                                           // Show The Desired Message .
    Serial.println (TheLastName);                                                                                                           // Show The Desired Message .


  }


}
