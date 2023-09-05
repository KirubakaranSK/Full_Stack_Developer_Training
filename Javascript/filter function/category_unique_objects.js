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
    } ,
    {
        name:'gorila',
        type:'animal'
    } ,
    {
        name:'penguin',
        type:'birds'
    }
]

var b= n.filter(e => e.type == 'animal')
         

console.log(b)
