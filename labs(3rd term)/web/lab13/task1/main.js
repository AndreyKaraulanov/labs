const form = document.forms.tableType;
const radio = form.elements.typeT;
const showBtn = document.querySelector('.showBtn')
const selectBox = document.querySelector('.selectBox');

const rezultTable = document.querySelector('.rezultTable');
const tableHead =  document.querySelector('.tableHead');


class Contract{
    #Service;
    #Customer;
    #serv_cnt;
    #term;
    #end_term
    #terms = ['2 роки', '5 років', '6 місяців','3 місяці'];
    constructor(Service, Customer){
        this.#Service = Service;
        this.#Customer = Customer;
        this.#serv_cnt = Math.round(Math.random()*(10-2));
        this.#term = this.#terms[Math.round(Math.random()*(this.#terms.length-1))];
        this.#end_term = Math.round(Math.random()*(2050 - 2022));
    }
    
    toTable(){
        const newRow = document.createElement('tr');
        newRow.innerHTML = `<td>${this.#Service.name}</td> 
        <td>${this.#Customer.name}</td>
        <td>${this.#serv_cnt}</td>
        <td>${this.#term}</td>
        <td>${this.#end_term}</td>
        `;
        rezultTable.append(newRow);
    }
    static tableHead(){
        tableHead.innerHTML = `<tr>
        <td>Service name</td>
        <td>Customer name</td>
        <td>Services number</td>
        <td>Terms</td>
        <td>Service end term</td>
        </tr>`
    }
        toFormular(){
            const newRow = document.createElement('tr');
            newRow.innerHTML = `<td>Service name:${this.#Service.name},
            Customer name:${this.#Customer.name},
            Service number:${this.#serv_cnt},
            Term: ${this.#term}, 
            End term: ${this.#end_term}
            </td> `;
            rezultTable.append(newRow);
        }
}
class Service{
    #serv_id;
    #name;
    #price;
    
    constructor(serv_id, name, price){
        this.#serv_id = serv_id;       
        this.#name = name;
        this.#price = price;
    }
    get serv_id(){
        return this.#serv_id;
    }
    get name()
    {
        return this.#name;
    }
    
    toTable(){
        const newRow = document.createElement('tr');
        newRow.innerHTML = `<td>${this.#serv_id}</td> 
        <td>${this.#name}</td>
        <td>${this.#price}</td>
        `;
        rezultTable.append(newRow);
    }
    static tableHead(){
        tableHead.innerHTML = `<tr>
        <td>Service ID</td>
        <td>Name</td>
        <td>Price</td>
        </tr>`
    }
    toFormular(){
        const newRow = document.createElement('tr');
        newRow.innerHTML = `<td>Service ID: ${this.#serv_id},
        Name: ${this.#name}, 
        Price: ${this.#price}</td>`;
        rezultTable.append(newRow);
    }
}
class Customer{
    #name;
    #adress;
    #count;
    
    constructor(name, adress, count){
        this.#name = name;
        this.#adress = adress;
        this.#count = count;
    }
    get name(){
        return this.#name;
    }
    
    toTable(){
        const newRow = document.createElement('tr');
        newRow.innerHTML = `<td>${this.#name}</td> 
        <td>${this.#adress}</td>
        <td>${this.#count}</td>
        `;
        rezultTable.append(newRow);
    }
    static tableHead(){
        tableHead.innerHTML = `<tr>
        <td>Name</td>
        <td>Address</td>
        <td>Count</td>
        </tr>`
    }
    toFormular(){
        const newRow = document.createElement('tr');
        newRow.innerHTML = `<td>Name: ${this.#name},
        Address: ${this.#adress},
        Count: ${this.#count}</td>
        `;
        rezultTable.append(newRow);
    }
    
}
let servArr = [];
let custArr=[];
let ContrArr =[];
let arr1 = [];
let arr2 = [];
var xhttp, textInf; 
xhttp = new XMLHttpRequest(); 
xhttp.onload = function() { 
    if (xhttp.readyState == 4 && xhttp.status == 200) { 
           textInf = xhttp.response; 
           let arrays = textInf.split('||'); 
           arr1 = arrays[0].split('#'); 
           arr2 = arrays[1].split('#'); 
    }
    for(let i=0; i < arr1.length; i++){ 
        let obj = arr1[i].split(';'); 
        let service = new Service(obj[0],obj[1],obj[2]);
        servArr.push(service);
    } 
   
    for(let i=0; i < arr2.length; i++){    
        let obj = arr2[i].split(';');     
        let customer = new Customer(obj[0],obj[1],obj[2]);
        custArr.push(customer);
    } 
    for(let i = 0; i<10; i++){
        let contract = new Contract(servArr[i],custArr[i]);
        ContrArr.push(contract);
    }
}
xhttp.open("GET", "data.txt"); 
xhttp.send();

function showTable(arr){
    rezultTable.innerText =''
    for(let i = 0; i<arr.length; i++){
        arr[i].toTable();
    }
}
function showFormular(arr){
    rezultTable.innerText =''
    for(let i = 0; i<arr.length; i++){
        arr[i].toFormular();
    }
}

showBtn.addEventListener('click', function(){
    if(radio.value == 'table'){
        rezultTable.style.border = '2px solid black'
        if(selectBox.value=='Service'){  
            Service.tableHead();         
            showTable(servArr);
        }
        else if(selectBox.value=='Customer'){
            Customer.tableHead();
            showTable(custArr);
        }
        else{
            Contract.tableHead();
            showTable(ContrArr);
        }
    }
    else{
        tableHead.innerText =''
        if(selectBox.value=='Service'){                    
            showFormular(servArr);
        }
        else if(selectBox.value=='Customer'){            
            showFormular(custArr);
        }
        else{            
            showFormular(ContrArr);
        }
    }
})