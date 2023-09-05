var n=['kiruba','bala','sham','sham','mohan','bala']

b=n.map((e,i) => {
    count=0
    c={}
    
    n.forEach(a => {
        if(a == e)
          count++
    }) 
    c[e]=count

    count=0
    return c

})



console.log(b)
  

