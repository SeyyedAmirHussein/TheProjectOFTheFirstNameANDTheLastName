// The Project OF The First Name , AND & The Last Name .

// The Main Code OF The Project OF The First Name , AND & The Last Name . .C

// In this program. We want to Receive The First Name and The Last Name from the Serial and print them on the Serial Monitor .




void setup () {


  Serial.begin (9600);                                                                                                                                              // Introducing The Series .


}


void loop () {


  if (Serial.available () ) {


    String The First Name = Serial.readString ();
    String The Last Name = Serial.readString ();


    Serial.print (" * * * * The First Name : * * * * ");                                                                                          // Show The Desired Message .
    Serial.print (" * * * * The Last Name : * * * * ");                                                                                          // Show The Desired Message .


    Serial.println (The First Name);                                                                                                         // Show The Desired Message .
    Serial.println (The Last Name);                                                                                                         // Show The Desired Message .


  }


}
