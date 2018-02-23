RSpec.describe GemExt do
  it "says hi" do
    expect {
      GemExt.hello_world
    }.to output("Hello world!\n").to_stdout
  end
end
