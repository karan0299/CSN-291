const URL = "http://10.61.17.223:8000";

const regex = /^[a-zA-Z0-9]*$/


const validate = val => {
    if (val == "" || val == undefined || val == null) {
        return false;
    }
    return true;
};

const checkRegex = val =>{
    return regex.test(val);
}



const login = () => {
    $("#login-form").on("submit",event => {
        event.preventDefault();
        let request = {};
        let uname = $("#login-form #username").val();
        if (!validate(uname)) {
            alert("user name is empty");
            return;
        }
        if(!checkRegex(uname)) {
            alert("name can be only alpha-numeric with lower case alphabets");
            return;
        }

        let password = $("#login-form #password").val();
        if (!validate(password)) {
            alert("password is empty");
            return;
        }
        request["password"] = password;

        
        $.ajax({
            type: "POST",
            url: `${URL}/`,
            crossDomain: true,
            data: JSON.stringify(request),
            dataType: 'json',
            contentType: 'application/json',
            beforeSend: function (xhr) {
                /* Authorization header */
                xhr.setRequestHeader("Authorization", "Basic " + btoa(request["username"]+":"+password));
            },
            success: function(result) {
                console.log("success")
            },
            error: function(err) {
                console.log("Error")
                alert(err.responseJSON.error);
            }
        })
    });
};


const getDoctors = () => {

    var x = 0;
    try {
        console.log(sessionStorage("UNAME"))
        sessionStorage.getItem("UNAME");
    } catch(e) {
        x = 1
    }
        $.ajax({
            type: "GET",
            url: `${URL}/doctor`,
            beforeSend: function (xhr) {
                /* Authorization header */
                if(x == 0){
                    xhr.setRequestHeader("Authorization", "Basic " + btoa(sessionStorage.getItem("UNAME") +":" + sessionStorage.getItem("PASSWORD")))
                }
                
            },
            success: function(result) {

                var male_img = ["maledoc1.jpeg", "maledoc2.jpeg","maledoc3.jpeg","maledoc5.jpeg", "maledoc4.jpeg"]
                var female_img = ["doctor1.jpeg","doctor4.jpeg", "doctor3.jpeg","doctor4.jpeg","doctor5.jpeg"]
                var output=""
                console.log(result)
                colors= ["Blue","Light-Blue","Cyan","Teal","Green","Light-Green","Lime","Amber","Orange","Pink","Deep-Purple","Indigo","Red","Purple","Blue-Grey"]
                $.each(result, function(i,v){
                    var rand = Math.floor((Math.random()*10)%5)
                    console.log(rand)
                    var img = male_img[rand]
                    var gender = "Male"
                    if(v["gender"]==2 ){
                        img = female_img[rand]
                        gender ="Female"
                    }
                    if(v["gender"]==3){
                        gender ="Other"
                    }
                    console.log(img)

                    var str =`<li class="col-md-4 col-sm-6 col-xs-12 unbullet">
                    <article class="material-card `+colors[i%5]+`">
                        <h2>
                            <span>`+v["first_name"]+`</span>
                            <strong>
                                <i class="fa fa-fw fa-star"></i>
                                `+v["speciality"]+`
                            </strong>
                        </h2>
                        <div class="mc-content">
                            <div class="img-container">
                                <img class="img-responsive" src="images/`+img+`">
                            </div>
                            <div class="mc-description">
                            address : `+v["address"]+
                            ` <br> gender : `+ gender+` 
                             <br> contact number : `+v["contact_number"]+
                             `<br> date of birth : `+v["date_of_birth"]+` 
                            </div>
                        </div>
                        <a class="mc-btn-action">
                            <i class="fa fa-bars"></i>
                        </a>
                    </article>
                    </li>`
                   output +=str
                });
                $("#listdoctors").html(output)
            },
            error: function(err) {
                console.log("Error")
                alert(err.responseJSON.error);
            }
    });
};

const getNurse = () => {
    console.log(sessionStorage.getItem("UNAME"))
    $.ajax({
        type: "GET",
        url: `${URL}/nurse/`,
        crossDomain: true,
        beforeSend: function (xhr) {
            /* Authorization header */
            xhr.setRequestHeader("Authorization", "Basic " + btoa(sessionStorage.getItem("UNAME") +":" + sessionStorage.getItem("PASSWORD")))
        },
        success: function(result) {
            var male_img = ["malenurse1.jpeg", "malenurse3.jpeg"]
            var female_img = ["nurse1.jpeg","nurse4.jpeg", "nurse3.jpeg","nurse4.jpeg"]    
            var output=""
                console.log(result)
                colors= ["Blue","Light-Blue","Cyan","Teal","Green","Light-Green","Lime","Amber","Orange","Pink","Deep-Purple","Indigo","Red","Purple","Blue-Grey"]
                $.each(result, function(i,v){
                    var rand = Math.floor((Math.random()*10)%5)
                    console.log(rand)
                    var img = male_img[rand%2]
                    var gender = "Male"
                    if(v["gender"]==2 ){
                        img = female_img[rand%4]
                        gender ="Female"
                    }
                    if(v["gender"]==3){
                        gender ="Other"
                        img = female_img[rand%4]
                    }
                    var str =`<li class="col-md-4 col-sm-6 col-xs-12 unbullet">
                    <article class="material-card `+colors[i%5]+`">
                        <h2>
                            <span>`+v["first_name"]+`</span>
                            <strong>
                                `+v["last_name"]+`
                            </strong>
                        </h2>
                        <div class="mc-content">
                            <div class="img-container">
                                <img class="img-responsive" src="images/`+img+`">
                            </div>
                            <div class="mc-description">
                            address : `+v["address"]+
                            ` <br> gender : `+gender+` 
                             <br> contact number : `+v["contact_number"]+
                             `<br> date of birth : `+v["date_of_birth"]+` 
                            </div>
                        </div>
                        <a class="mc-btn-action">
                            <i class="fa fa-bars"></i>
                        </a>
                    </article>
                    </li>`
                   output +=str
                });
                $("#listdoctors").html(output)
        },
        error: function(err) {
            console.log("Error")
            alert(err.responseJSON.error);
        }
});
};

const getCleaningStaff = () => {
    var male_img = ["mcs1.jpeg", "mcs2.jpeg","mcs3.jpeg","mcs4.jpeg"]
    var female_img = ["cs1.jpeg","cs2.jpeg", "cs3.jpeg","cs4.jpeg"]
                
    $.ajax({
        type: "GET",
        url: `${URL}/cleaning_staff/`,
        crossDomain: true,
        beforeSend: function (xhr) {
            /* Authorization header */
            xhr.setRequestHeader("Authorization", "Basic " + btoa(sessionStorage.getItem("UNAME") +":" + sessionStorage.getItem("PASSWORD")))
        },
        success: function(result) {
            var output=""
            console.log(result)
            colors= ["Blue","Light-Blue","Cyan","Teal","Green","Light-Green","Lime","Amber","Orange","Pink","Deep-Purple","Indigo","Red","Purple","Blue-Grey"]
            $.each(result, function(i,v){
                var rand = Math.floor((Math.random()*10)%4)
                    console.log(rand)
                    var img = male_img[rand]
                    var gender = "Male"
                    if(v["gender"]==2 ){
                        img = female_img[rand]
                        gender ="Female"
                    }
                    if(v["gender"]==3){
                        gender ="Other"
                        img = female_img[rand]
                    }
                var str =`<li class="col-md-4 col-sm-6 col-xs-12 unbullet">
                <article class="material-card `+colors[i%5]+`">
                    <h2>
                        <span>`+v["first_name"]+`</span>
                        <strong>
                            `+v["last_name"]+`
                        </strong>
                    </h2>
                    <div class="mc-content">
                        <div class="img-container">
                            <img class="img-responsive" src="images/`+img+`">
                        </div>
                        <div class="mc-description">
                         gender : `+gender+`
                         <br> contact number : `+v["contact_number"]+`
                         <br> start of shift : `+v["shift_start"]+` 
                         <br> end of shift : `+v["shift_end"]+`
                        </div>
                    </div>
                    <a class="mc-btn-action">
                        <i class="fa fa-bars"></i>
                    </a>
                </article>
                </li>`
               output +=str
            });
            $("#listdoctors").html(output)
        },
        error: function(err) {
            console.log("Error")
            alert(err.responseJSON.error);
        }
    });
};

const getPharmacy = () => {

        $.ajax({
            type: "GET",
            url: `${URL}/pharmacy/`,
            crossDomain: true,
            beforeSend: function (xhr) {
                /* Authorization header */
                xhr.setRequestHeader("Authorization", "Basic " + btoa(sessionStorage.getItem("UNAME") +":" + sessionStorage.getItem("PASSWORD")))
            },
            success: function(result) {
               console.log(result)
               var output = `<h1>`+result[0].pharmacist["first_name"]+` `+result[0].pharmacist["last_name"]+`</h1>
                            <p>`+result[0].pharmacist["contact_number"]+`</p>`
                $("#pharma").html(output)
            },
            error: function(err) {
                console.log("Error")
                alert(err.responseJSON.error);
            }
    });
};


const getMedicine = () => {
        $.ajax({
            type: "GET",
            url: `${URL}/medicine`,
            crossDomain: true,
            beforeSend: function (xhr) {
                /* Authorization header */
                xhr.setRequestHeader("Authorization", "Basic " + btoa(sessionStorage.getItem("UNAME") +":" + sessionStorage.getItem("PASSWORD")))
            },
            success: function(result) {
                var output = ""
                $.each(result, function(i,v){
                    console.log(v)
                   var str = '<option  value="'+v["id"]+'">'+v["name"]+'</option> <br>'
                   output+=str
                });
                $("#medicines").html(output)
            },
            error: function(err) {
                console.log("Error")
                alert(err.responseJSON.error);
            }
    });
};


const getAdministrator = () => {
    $.ajax({
        type: "GET",
        url: `${URL}/administrator/`,
        crossDomain: true,
        beforeSend: function (xhr) {
            /* Authorization header */
            xhr.setRequestHeader("Authorization", "Basic " + btoa(sessionStorage.getItem("UNAME") +":" + sessionStorage.getItem("PASSWORD")))
        },
        success: function(result) {
            console.log(result)
        },
        error: function(err) {
            console.log("Error")
            alert(err.responseJSON.error);
        }
    });
};

const getDiagnosis = () => {
    var id = sessionStorage.getItem("PATIENTID")
    $.ajax({
        type: "GET",
        url: `${URL}/patient/`+id+'/',
        crossDomain: true,
        beforeSend: function (xhr) {
            /* Authorization header */
            xhr.setRequestHeader("Authorization", "Basic " + btoa(sessionStorage.getItem("UNAME") +":" + sessionStorage.getItem("PASSWORD")))
        },
        success: function(result) {
            var output = ""
            console.log(result)
            var patientinfo = '<h1>'+result["name"]+'</h1><p>'+result["contact_number"]+'</p>'
            $("#patient").html(patientinfo)

            $.each(result["diagnosis"], function(i,v){
               var str= '<a href="#" class="gmail"><div class="content"><h1>'+v["description"]+'</h1>'
            //    '<span>Stock : '+v["stock"]+'</span><span>Price : '+v["cost"]+
            //             '</span></div> <svg class="arrow" xmlns="http://www.w3.org/2000/svg" width="48" height="48" viewBox="0 0 48 48"> <g class="nc-icon-wrapper" fill="#444444"> <path d="M17.17 32.92l9.17-9.17-9.17-9.17L20 11.75l12 12-12 12z"></path> </g> </svg></a>'
                $.each(v["medicines"], function(j,e){
                    str+= '<span>'+e["name"]+'</span>'
                })

                str+='</div></a>'
                output+=str
            });
            $("#diagnosis").html(output)
        },
        error: function(err) {
            console.log("Error")
            alert(err.responseJSON.error);
        }
    });
};

const getLab = () => {
    $.ajax({
        type: "GET",
        url: `${URL}/lab/`,
        crossDomain: true,
        beforeSend: function (xhr) {
            /* Authorization header */
            xhr.setRequestHeader("Authorization", "Basic " + btoa(sessionStorage.getItem("UNAME") +":" + sessionStorage.getItem("PASSWORD")))
        },
        success: function(result) {
            console.log(result)
            var output = result[0].lab_assistant_name;
            $("#assistant").html(output)
        },
        error: function(err) {
            console.log("Error")
            alert(err.responseJSON.error);
        }
    });
};

const addLabAssistant = () => {
    $("#lab-form").on("submit", event => {
        event.preventDefault();
        let request = {};
        let name = $("#lab-form #name").val();
        if (!validate(name)) {
            alert("name is empty");
            return;
        }
        if(!checkRegex(name)) {
            alert("name can be only alpha-numeric");
            return;
        }
        request["name"] = name;

        let salary = $("#login-form #salary").val();
        if (!validate(salary)) {
            alert("salary is empty");
            return;
        }
        request["salary"] = salary;


        $.ajax({
            type: "POST",
            url: `${URL}/lab/`,
            crossDomain: true,
            beforeSend: function (xhr) {
                /* Authorization header */
                xhr.setRequestHeader("Authorization", "Basic " + btoa(sessionStorage.getItem("UNAME") +":" + sessionStorage.getItem("PASSWORD")))
            },
            data: JSON.stringify(request),
            dataType: 'json',
            contentType: 'application/json',
            success: function(result) {
                console.log("Success")
            },
            error: function(err) {
                console.log("Error")
                alert(err.responseJSON.error);
            }
        })
    });
};


const addMedicine = () => {
    $("#medicine-form").on("submit", event => {
        event.preventDefault();
        let request = {};
        let name = $("#medicine-form #name").val();
        if (!validate(name)) {
            alert("name is empty");
            return;
        }
        if(!checkRegex(name)) {
            alert("name can be only alpha-numeric");
            return;
        }
        request["name"] = name;

        let stock = $("#medicine-form #stock").val();
        if (!validate(stock)) {
            alert("stock is empty");
            return;
        }
        request["stock"] = stock;

        let cost = $("#medicine-form #stock").val();
        if (!validate(cost)) {
            alert(" is empty");
            return;
        }
        request["cost"] = cost;


        $.ajax({
            type: "POST",
            url: `${URL}/medicine/`,
            crossDomain: true,
            data: JSON.stringify(request),
            dataType: 'json',
            contentType: 'application/json',
            beforeSend: function (xhr) {
                /* Authorization header */
                xhr.setRequestHeader("Authorization", "Basic " + btoa(sessionStorage.getItem("UNAME") +":" + sessionStorage.getItem("PASSWORD")))
            },
            success: function(result) {
                console.log("Success")
            },
            error: function(err) {
                console.log("Error")
                alert(err.responseJSON.error);
            }
        })
    });
};

const getPatients = () => {
    $.ajax({
        type: "GET",
        url: `${URL}/patient/`,
        beforeSend: function (xhr) {
            /* Authorization header */
            xhr.setRequestHeader("Authorization", "Basic " + btoa(sessionStorage.getItem("UNAME") +":" + sessionStorage.getItem("PASSWORD")))
        },
        success: function(result) {
            var output=""
            console.log("hey")
            colors= ["Blue","Light-Blue","Cyan","Teal","Green","Light-Green","Lime","Amber","Orange","Pink","Deep-Purple","Indigo","Red","Purple","Blue-Grey"]
            $.each(result, function(i,v){
                var gender = "Male"
                if(v["gender"]==2 ){
                    gender ="Female"
                }
                if(v["gender"]==3){
                    gender ="Other"
                }
                var str =`<li class="col-md-4 col-sm-6 col-xs-12 unbullet">
                <article class="material-card `+colors[i%5]+`">
                    <h2>
                        <span>`+v["name"]+`</span>
                        <strong>
                            <span>`+v["blood_group"]+`</span>
                        </strong>
                    </h2>
                    <div id=${v["id"]} class="mc-content">
                        <div class="img-container">
                            <img class="img-responsive" src="images/team_4.png">
                        </div>
                        <div class="mc-description">
                        address : `+v["address"]+
                        ` <br> gender : `+gender+`
                         <br> contact number : `+v["contact_number"]+
                         `<br> date of birth : `+v["date_of_birth"]+` 
                        </div>
                    </div>
                    <a id=${v["id"]} class="mc-btn-action">
                        <i class="fa fa-bars"></i>
                    </a>
                </article>
                </li>`
               output +=str
            });
            $("#listpatient").html(output)
        },
        error: function(err) {
            console.log("Error")
            alert(err.responseJSON.error);
        }
});
};

const alterMeds = () => {
    $.ajax({
        type: "GET",
        url: `${URL}/medicine`,
        crossDomain: true,
        beforeSend: function (xhr) {
            /* Authorization header */
            xhr.setRequestHeader("Authorization", "Basic " + btoa(sessionStorage.getItem("UNAME") +":" + sessionStorage.getItem("PASSWORD")))
        },
        success: function(result) {
            var output = ""
            $.each(result, function(i,v){
                console.log(v)
               var str= '<a onclick="setMed('+v["id"]+')" class="gmail"><div class="content"><h1>'+v["name"]+
                        '</h1><span>Stock : '+v["stock"]+'</span><span>Price : '+v["cost"]+
                        '</span></div> <svg class="arrow" xmlns="http://www.w3.org/2000/svg" width="48" height="48" viewBox="0 0 48 48"> <g class="nc-icon-wrapper" fill="#444444"> <path d="M17.17 32.92l9.17-9.17-9.17-9.17L20 11.75l12 12-12 12z"></path> </g> </svg></a>'

                output+=str
            });
            output+= '<a href="addMedicine.html" class="gmail"><div class="content"><h1>Add Medicine</h1></div> <svg class="arrow" xmlns="http://www.w3.org/2000/svg" width="48" height="48" viewBox="0 0 48 48"> <g class="nc-icon-wrapper" fill="#444444"> <path d="M17.17 32.92l9.17-9.17-9.17-9.17L20 11.75l12 12-12 12z"></path> </g> </svg></a>'

            $("#meds").html(output)
        },
        error: function(err) {
            console.log("Error")
            alert(err.responseJSON.error);
        }
});
};

const getMeds = () => {
    $.ajax({
        type: "GET",
        url: `${URL}/medicine`,
        crossDomain: true,
        beforeSend: function (xhr) {
            /* Authorization header */
            xhr.setRequestHeader("Authorization", "Basic " + btoa(sessionStorage.getItem("UNAME") +":" + sessionStorage.getItem("PASSWORD")))
        },
        success: function(result) {
            var output = ""
            $.each(result, function(i,v){
                console.log(v)
               var str = '<option  value="'+v["id"]+'">'+v["name"]+'</option> <br>'
               var str= '<a href="#" class="gmail"><div class="content"><h1>'+v["name"]+
                        '</h1><span>Stock : '+v["stock"]+'</span><span>Price : '+v["cost"]+
                        '</span></div> <svg class="arrow" xmlns="http://www.w3.org/2000/svg" width="48" height="48" viewBox="0 0 48 48"> <g class="nc-icon-wrapper" fill="#444444"> <path d="M17.17 32.92l9.17-9.17-9.17-9.17L20 11.75l12 12-12 12z"></path> </g> </svg></a>'

                output+=str
            });
            $("#meds").html(output)
        },
        error: function(err) {
            console.log("Error")
            alert(err.responseJSON.error);
        }
});
};