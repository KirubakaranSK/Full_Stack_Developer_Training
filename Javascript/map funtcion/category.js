var n=[
    {
        name:'lion',
        type:'animal'
    },
    {
        name:'eagle',
        type:'birds'
    },
    {
        name:'dog',
        type:'animal'
    },
    {
        name:'fox',
        type:'animal'
    },
    
    {
        name:'sparrow',
        type:'birds'
    }  
]

a=[]
b=[]

n.forEach(e => {
    if(e.type == 'animal')
        a.push(e.name)
    else
        b.push(e.name)
})

var c=[]
c.birds=b
c.animals=a

console.log(c)