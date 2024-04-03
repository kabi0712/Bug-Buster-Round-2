const readline = require('readline');

const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout
});

function main() {
    rl.question("Enter first number: ", function(num1) {
        num1 = parseFloat(num1);
        rl.question("Enter second number: ", function(num2) {
            num2 = parseFloat(num2);
            rl.question("Enter operation (+, -, *, /): ", function(operation) {
                let result;
               
                switch (operation) 
                    case "+":
                        result = num1 + num2;
                        break;
                    case "-":
                        result = num1 - num2;
                        break;
                    case "*":
                        result = num1 * num2;
                        break;
                    case "/":
                        if (num2 === 0) 
                            result = "Error: Cannot divide by zero";
                        else 
                            result = num1 / num2;
                        break;
                    default:
                        result = "Invalid operation";
                } 
                console.log("Result:", result);
                rl.close();
            });
        });
    });
}

main();
