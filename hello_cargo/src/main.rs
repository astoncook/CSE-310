use rand::seq::SliceRandom;
use std::io::{self, Write};
use std::thread;
use std::time::Duration;

// Fortune Teller responses
pub static RESPONSES: [&'static str; 20] = [
    "It is certain.",
    "You will get an “A” on a test.",
    "You will be rich.",
    "Good fortune will be yours.",
    "You will have many friends.",
    "Do a good deed today.",
    "Someone will call you today.",
    "You will go to a party soon.",
    "Be careful on Tuesday.",
];

//Speaks to the User
pub fn shake() {
    println!("Fortune Teller");
    loop {
        let question = prompt();
        // allows user to quit
        if question == "q" {
            break;
        } else if question == "" {
            println!("Error. Please try again.");
            continue;
        }
        print!("Processing");
        let mut rng = rand::thread_rng();
        // Choose one of the responses to use
        let response = RESPONSES.choose(&mut rng).unwrap();
        println!("Your Fortune is: {}", response);
    }
}

//Gives the user another chance to quit the program.
pub fn prompt() -> String {
    println!("type q to quit");
    if question == "q" {
        break;
    } else if question == "" {
        println!("Error. Please try again.");
        continue;
}