document.addEventListener("DOMContentLoaded",()=>{

var display = document.getElementById("display")
var buttons = document.querySelectorAll("button")

buttons.forEach(button => {

    button.addEventListener("click",function(){

        if(button.id === "clear"){
            display.value='';
        }
        else if(button.id ==="backspace"){

            display.value=display.value.slice(0,-1)
        }
        else if(button.id ==="equal"){
            try {
                const result = evaluate(display.value);
                display.value = result;

            } catch (error) {
                display.value = "Error";
        }
        }
        else{
            display.value += button.textContent;
        }
    })


    function evaluate(expression) {
        const tokens = expression.match(/\d+|\+|-|\*|\//g);

        if (!tokens) {
            throw new Error("Invalid input");
        }

        const operators = [];
        const values = [];

        for (let e of tokens) {
            if (operator(e)) {
                while (
                    operators.length > 0 &&
                    precedence(operators[operators.length - 1]) >= precedence(e)
                ) {
                    apply(operators.pop(), values);
                }
                operators.push(e);
            } else {
                values.push(parseFloat(e));
            }
        }

        while (operators.length > 0) {
            apply(operators.pop(), values);
        }

        if (values.length !== 1 || operators.length !== 0) {
            throw new Error("Invalid input");
        }

        return values[0];
    }

    function operator(e) {
        return e === "+" || e === "-" || e === "*" || e === "/";
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
                    throw new Error("Division by zero");
                }
                values.push(a / b);
                break;
            default:
                throw new Error("Invalid operator");
        }
    }

})
})