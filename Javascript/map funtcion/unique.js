n=['dog','cat','cow','deer','camel','cow','cat','camel','dog']

var a=[]

n.forEach(e => {
    if(!a.includes(e))
        a.push(e)
})

console.log(a)

