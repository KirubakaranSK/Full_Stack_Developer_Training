var a=[67,44,56,77,43,22]

var b=[22,77,56,44,8,7]

// var c=a.map(function(e,i) {
//              return e+b[i]
//             }
//              )

// console.log(c)

var c=[]

a.forEach((e,i) =>{
    function sum (e,i){
        return e+b[i]
    }
    c.push(sum(e,i))
})

console.log(c)