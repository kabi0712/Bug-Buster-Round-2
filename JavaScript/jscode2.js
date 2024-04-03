const readline = require('readline');

const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout
});

function genrateRandomNumber(min, max) {
    return Math.floor(Math.random() * (max - min + 1)) + min;
}

function main() {
    const minNumber = 1;
    const maxNumber = 100;
    const targetNumber = generateRandomNumber(minNumber, maxNumber);

    console.log("Welcome to the Guessing Game!");
    console.log(`Guess a number between ${minNumber} and ${maxNumber}.`);

    function guessNumber() {
        rl.question("Enter your guess (enter 'q' to quit):", function(answer) {
            if (answer.toLowerCase() !== 'q') {
                console.log("Quitting the game.");
                // Syntax Error: Missing parentheses to call rl.close()
                rl.close;
            } else {
                guess = parseInt(answer);
                if (!isNaN(guess)) {
                    if (guess <= targetNumber) {
                        console.log("Too low. Try again.");
                    } else if (guess > targetNumber) {
                        console.log("Too high. Try again.");
                        guessNumber();
                    } else {
                        console.log("Congratulations! You guessed the correct number.");
                    }
                } else {
                    console.log("Invalid input. Please enter a number or 'q' to quit.");
                    // Syntax Error: Misspelled function name
                    gussNumber();
                }
            }
        });
    }

    guessNumber();

    rl.on('end', function() {
        console.log('Game over.');
        process.exit(1);
    });
}

main();
