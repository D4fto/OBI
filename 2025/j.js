function cartesiando(x,y){ 
    if(x==0||y==0){
        if(x==0&&y==0){
            console.log("Origem")
            return
        }
        if(x==0){
            console.log("Eixo x")
            return
        }
        console.log("Eixo y")
        return
    }
    if(x>0&&y>0){
        console.log("Q1")
        return
    }
    if(x>0||y>0){
        if(y>0){
            console.log("Q2")
            return
        }
        console.log("Q4")
        return
    }
    console.log("Q3")
    return
} 


function triangulo(x,y,z){ 
    let temp;
    if(x<y){
        temp = x
        x = y
        y = temp
    }
    if(x<z){
        temp = x
        x = z
        z = temp
    }
    if(y<z){
        temp = y
        y = z
        z = temp
    }
    console.log(x,y,z)
    if(x>=y+z){
        console.log("NAO FORMA TRIANGULO")
        return
    }
    if(x**2==y**2+z**2){
        console.log("TRIANGULO RETANGULO")
    }
    if(x**2>y**2+z**2){
        console.log("TRIANGULO OBTUSANGULO")
        
    }
    if(x**2<y**2+z**2){
        console.log("TRIANGULO ACUTANGULO")
    }
    if(x==y && x == z){
        console.log(x,y,x,z)
        console.log("TRIANGULO EQUILATERO")
        return
    }
    if(x==y || x==z || z==y){
        console.log("TRIANGULO ISOSCELES")
        return
    }
    
} 




// salario(400.00)
// salario(800.01)
// salario(2000.00)



function palindromo(str, x = 0, y){
    let newStr = str.split("").reverse().join("")
    return newStr == str
}
palindromo("str")
// console.log(palindromo("socorram me subi no on ibus em marrocos"))
// console.log(palindromo("palavra aleatória"))



function login(usuario, senha, isAdmin = false){
    console.log(`Login efutado com sucesso para usuario: ${usuario} e senha: ${senha}`)
    if(isAdmin){
        liberarAcesso(usuario)
        return "usuário válidado como admin"
    }
}


const express = function (){
    console.log("Eu sou uma express function")
}

// let arr = ["playstation","minecraft","aspirador de pó","xbox","89"]
// let result = arr.map((el) => el=="xbox" ? `Eu odeio ${el}` : `Eu amo ${el}`)
// console.log(result)
// function ordena(x){
//     let menor = x[0]
//     let index = 0
//     let ned = [];
//     for (let j = 0; j < x.length; j++) {
//         for (let i = 0; i < x.length; i++) {
//             if(x[i]===false){
//                 continue
//             }
//             if(x[i]<menor||menor===false){
//                 menor=x[i]
//                 index=i
//             }
//         }
//         ned.push(menor)
//         x[index]=false
//         menor=false
        
//     }
//     return ned
// }
// function ordena2(x){
//     let it = true
//     for (let j = 0; j < x.length; j++) {
//         if(!it){
//             break
//         }
//         for (let i = 0; i < x.length-1; i++) {
//             if(x[i+1]<x[i]){
//                 let temp = x[i]
//                 x[i]=x[i+1]
//                 x[i+1]=temp

//             }
//         }
//     }
//     return x
// }
// console.log(ordena2([0,-9,8,15,3,-8,2,1,3,4,5,6]))

// const v = [1,2,3,4,5];

// function inverterArrayComReverse(arr){
//     arr.reverse()
// }

// function inverterArraySemReverse(arr){
//     let newArray = [...arr]

//     for (let i = 0; i < arr.length; i++) {
//         arr[i] = newArray[arr.length-i-1]
//     }
// }

// inverterArrayComReverse(v)
// console.log(v)
// inverterArraySemReverse(v)
// console.log(v)

// let v1 = [1,2,3,4,5,5,12]

// function apenasPar(arr){
//     return arr.filter((x) => {return x%2 == 0})
// }
// let v2 = apenasPar(v1)

// console.log(v1) // [ 1, 2, 3, 4, 5, 5, 12 ]
// console.log(v2) // [ 2, 4, 12 ]

// let strs = ["playstation", "xbox", "playstation 5", "2004", "2R$"]

// function ordena(arr){
//     return arr.sort((a,b)=>{
//         if(a.length<b.length)return -1
//         if(a.length>b.length)return 1
//         return 0
//     })
// }

// strs = ordena(strs)

// console.log(strs) // [ '2R$', 'xbox', '2004', 'playstation', 'playstation 5' ]

// let arr = ["playstation", 1, 2, "3"]

// // Verificar se um array possui um indice
// if(2 in arr){
//     console.log("Array possui o indice 2")
// }else{
//     console.log("Array Não possui o indice 2")
// }
// // Array possui o indice 2

// // Percorrer um array a partir de seus indices
// for(i in arr){
//     console.log(`${i}: ${arr[i]}`)
// }
// // 0: playstation
// // 1: 1
// // 2: 2
// // 3: 3

let array = [1,2,3,4,-5,6,7,8,9,10]

function menor(arr){
    let menor = [0, arr[0]]
    for(i in arr){
        if(arr[i]<menor[1]){
            menor[0] = i
            menor[1] = arr[i]
        }
    }
    console.log(`Menor valor: ${menor[1]}\nPosicao: ${menor[0]}`)
}

menor(array)
// Menor valor: -5
// Posicao: 4