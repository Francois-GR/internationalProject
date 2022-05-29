const express = require('express')

const router = express.Router()


router.get('/',(req,res)=>{
    res.json('hi')
})

router.get('/visioair',(req,res)=>{
    res.render('../views/visioAir.ejs')
})

module.exports = router