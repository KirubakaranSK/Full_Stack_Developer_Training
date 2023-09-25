
var form = document.getElementById('form');

var name=document.querySelector('#ename');

var email = document.getElementById('email');

var password = document.getElementById('password');

var dob = document.getElementById('dob');

var cpassword=document.getElementById('cpassword');

form.addEventListener('submit',(e) => {

    e.preventDefault();
    validate();
    
})
function validate(){

    var nameval = ename.value.trim();
    var emailval = email.value.trim();
    var passwordval = password.value.trim();
    var cpasswordval = cpassword.value.trim()
    var dobval = dob.value.trim()

    if(nameval == '' || nameval == null){
        seterror(ename,'*name is required')
    }
    else{
        setsuccess(ename);
    }


    if(emailval === ''){
        seterror(email,'*email is required')
    }
    else if(!ValidateEmail(emailval)){
        seterror(email,'*enter the valid email')
    }
    else{
        setsuccess(email);
    }

    if(passwordval === ''){
        seterror(password,'*password is required')
    }
    else if(passwordval.length <= 8){
        seterror(password,'*password required maximum 8 character')
    }
    else{
        setsuccess(password)
    }

    if(cpasswordval === ''){
        seterror(cpassword,'*enter the conform password')
    }
    else if(cpasswordval != passwordval){
        seterror(cpassword,'*password are not matching')
    }
    else{
        setsuccess(cpassword)
    }

    if(dobval ===''){
        seterror(dob,'*enter the date of birth')
    }
    else{
        setsuccess(dob)
    }
}

function seterror(e,msg){
    var innergroup = e.parentElement;
    var error = innergroup.querySelector('.errors');
    error.innerText = msg;
    innergroup.classList.add('error');
    innergroup.classList.remove('success');
}

function setsuccess(e){
    var innergroup = e.parentElement;
    var error = innergroup.querySelector('.errors');

    error.innerText = '';
    innergroup.classList.add('success');
    innergroup.classList.remove('error');
}

function ValidateEmail(mail) 
{
 if (/^\w+([\.-]?\w+)*@\w+([\.-]?\w+)*(\.\w{2,3})+$/.test(form.email.value))
  {
    return (true);
  }
    return (false);
}


