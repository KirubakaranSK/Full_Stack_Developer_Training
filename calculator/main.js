document.addEventListener("DOMContentLoaded", () => {
    var display = document.getElementById("display");
    var buttons = document.querySelectorAll("button");

    buttons.forEach((button) => {
        button.addEventListener("click", function () {
            if (button.id === "clear") {
                display.value = "";
            } else if (button.id === "backspace") {
                display.value = display.value.slice(0, -1);
            } else if (button.id === "equal") {
                const result = evaluate(display.value);
                if (typeof result === "string") {
                    display.value = result;
                } else {
                    display.value = result.toString();
                }
            } else {
                display.value += button.textContent;
            }
        });
    });

    function evaluate(expression) {
        const tokens = expression.match(/\d+\.\d+|\d+|[+\-*/]/g);

        if (!tokens) {
            return "Invalid input";
        }

        const operators = [];
        const values = [];

        for (let token of tokens) {
            if (operator(token)) {
                while (
                    operators.length > 0 &&
                    precedence(operators[operators.length - 1]) >= precedence(token)
                ) {
                    apply(operators.pop(), values);
                }
                operators.push(token);
            } else {
                values.push(parseFloat(token));
            }
        }

        while (operators.length > 0) {
            apply(operators.pop(), values);
        }

        if (values.length !== 1 || operators.length !== 0) {
            return "Invalid input";
        }

        return values[0];
    }

    function operator(token) {
        return token === "+" || token === "-" || token === "*" || token === "/";
    }

    function precedence(symbol) {
        switch (symbol) {
            case "+":
            case "-":
                return 1;
            case "*":
            case "/":
                return 2;
            default:
                return 0;
        }
    }

    function apply(operator, values) {
        const b = values.pop();
        const a = values.pop();
        switch (operator) {
            case "+":
                values.push(a + b);
                break;
            case "-":
                values.push(a - b);
                break;
            case "*":
                values.push(a * b);
                break;
            case "/":
                if (b === 0) {
                    return "Division by zero";
                }
                values.push(a / b);
                break;
            default:
                return "Invalid operator";
        }
    }
});
