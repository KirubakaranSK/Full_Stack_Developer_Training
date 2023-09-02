var n="education"

var m=n.split('')

m.forEach((e,i) => {
    if(i%2 != 0)
        e=e.toUpperCase()

    console.log(e)
})