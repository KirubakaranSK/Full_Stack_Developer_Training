var n='malayalam'

var c=0

n=n.split('')

var l=n.length-1

n.forEach(function (e,i){
        if(e == n[l-i])
            c+=1
})

if(c == l+1)
   console.log("it is palindrom")
else
   console.log("not a palindrom")
