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

kuz = browser.radios(:id => /group_1000006/)

kuz2 = kuz.map do |i|
    i.value
end
puts kuz2.length

browser.radio(:id => /group_1000002_1/).click

ariel = browser.checkboxes(:id => /group_1000003/)
#puts ariel

ariel.map do |p|
    if p.value.include? 'y'
        p.click
    end
end
#browser.checkbox(:id => /group_1000003_1/).click

browser.select_list(:id => 'entry_1000004').select("Firefox")

browser.radio(:id => 'group_1000005_5').click
browser.radio(:id => 'group_1000006_5').click
browser.radio(:id => 'group_1000007_5').click
sleep(3)
browser.button(:id => 'ss-submit').click

sleep(1)
browser.close