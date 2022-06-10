const express = require('express')
const request = require('request')

const router = express.Router()


router.get('/',(req,res)=>{
    res.redirect('/visioair')

})

router.get('/visioair',(req,res)=>{


    
    request('http://83.87.3.52:1880/data', {json:true}, (err,r,body)=>{
        if(err){
            res.json(err)
        }
        if(body == 400){
            res.json('error')
        }
        else{
                     
             res.render('../../views/visioAir.ejs', {data:body.carbon})

        }
        
    })

    
})

module.exports = router



