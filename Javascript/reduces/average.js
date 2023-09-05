var n=[12,34,56,78,90,9,8,76,54,32,10]

avr=function(a,b){
    return a+b
}

r=n.reduce(avr)

console.log(r/n.length)