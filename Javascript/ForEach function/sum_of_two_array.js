a=[1,2,3,4,5]
b=[5,4,3,2,1]

var l=0,k=0
a.forEach((e,i) => {
    l=e+l
    k=b[i]+k
}
    )

// b.forEach(e => k=k+e)

console.log(l+k)