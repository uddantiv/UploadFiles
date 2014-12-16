var exec = require('cordova/exec');
/**
 * Constructor
 */
               function UploadFile() {}
               
               UploadFile.prototype.uploadFile = function(win,fail,options) {
               exec(win,fail, "UploadFile", "uploadFile",options);
               }
               
               var uploadfile = new UploadFile();
               module.exports = uploadfile