# ruby watirtest.rb
require 'rubygems'
require 'watir'
browser = Watir::Browser.new
browser.goto 'http://bit.ly/watir-example'

browser.text_field(:name => 'entry.1000000').set 'monzalo es cancer'
puts 'algo que aparece'
puts browser.text_field(:name => 'entry.1000000').value
zain = ""
for i in 1..10 do
    zain = zain + "hola iter #{i} \n"
end

browser.textarea(:id => 'entry_1000001').set zain

browser.textarea(:css => 'textarea[name="entry.1000001"]').clear

browser.element(:xpath => '//textarea[@name="entry.1000001"]').send_keys "hola mac apesta"
#set ({"text" => "hola"})


sleep(1)
browser.close